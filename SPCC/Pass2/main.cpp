#include<bits/stdc++.h>
using namespace std;

struct MDT_row
{
    int index;
    string code;
};

struct MNT_row
{
    int index;
    string name;
    int mdt_index;
};

void init_MDT(vector<MDT_row> &MDT, int &mdtc)
{
    MDT_row row;
    row.index = mdtc;
    mdtc++;
    row.code = "&LAB INCR &ARG1,&ARG2,&ARG3";
    MDT.push_back(row);
    row.index = mdtc;
    mdtc++;
    row.code = "#0 ADD AREG,#1";
    MDT.push_back(row);
    row.index = mdtc;
    mdtc++;
    row.code = "      ADD AREG,#2";
    MDT.push_back(row);
    row.index = mdtc;
    mdtc++;
    row.code = "      ADD AREG,#3";
    MDT.push_back(row);
    row.index = mdtc;
    mdtc++;
    row.code = "      MEND";
    MDT.push_back(row);
}

void init_MNT(vector<MNT_row> &MNT, int &mntc)
{
    MNT_row row;
    row.index = mntc;
    mntc++;
    row.name = "INCR";
    row.mdt_index = 1;
    MNT.push_back(row);
}

void init_ALA(vector<string> &ALA)
{
    ALA.push_back("&LAB");
    ALA.push_back("&ARG1");
    ALA.push_back("&ARG2");
    ALA.push_back("&ARG3");
}

int search_mnt(string word,vector<MNT_row>MNT)
{
    for (int i=0;i<MNT.size();i++)
    {
        if (MNT[i].name == word)
        {
            return i;
        }
    }
    return -1;
}

int get_mnt_row(string line,vector<MNT_row>MNT)
{
    int pos=0;
    while(pos<line.length())
    {
        while ((pos<line.length()) && (line[pos] == ' ' || line[pos]==','))
        {
            pos++;
        }
        string word = "";
        while (pos<line.length() && line[pos]!=',' && line[pos]!=' ')
        {
            word += line[pos];
            pos++;
        }
        int index = search_mnt(word,MNT);
        if (index != -1)
        {
            return index;
        }
    }
    return -1;
}

void expand_macro(MNT_row row,vector<MDT_row>MDT,vector<string> &output,vector<string> &ALA, string line)
{
    int mdtp = row.mdt_index;
    int pos=0;
    vector<string>dummy_params;
    vector<string>actual_params;
    while(pos<line.length())
    {
        while ((pos<line.length()) && (line[pos] == ' ' || line[pos]==','))
        {
            pos++;
        }
        string word = "";
        while (pos<line.length() && line[pos]!=',' && line[pos]!=' ')
        {
            word += line[pos];
            pos++;
        }
        if (word != row.name)
        {
            actual_params.push_back(word);
        }
    }
    line = MDT[mdtp-1].code;
    mdtp++;
    pos = 0;
    while(pos<line.length())
    {
        while ((pos<line.length()) && (line[pos] == ' ' || line[pos]==','))
        {
            pos++;
        }
        if (line[pos] == '&')
        {
            string arg = "";
            while (pos<line.length() && line[pos]!=',' && line[pos]!=' ')
            {
                arg += line[pos];
                pos++;
            }
            dummy_params.push_back(arg);
        }
        else
        {
            pos++;
        }
    }
    for (int i=0;i<actual_params.size();i++)
    {
        for (int j=0;j<ALA.size();j++)
        {
            if (ALA[j] == dummy_params[i])
            {
                ALA[j] = actual_params[i];
            }
        }
    }
    while (true)
    {
        int pos=0;
        line = MDT[mdtp-1].code;
        if ((line.find("MEND") != string::npos) || (line.find("mend") != string::npos))
        {
            break;
        }
        string res = "";
        while(pos<line.length())
        {
            while ((pos<line.length()) && (line[pos] == ' ' || line[pos]==','))
            {
                res += line[pos];
                pos++;
            }
            if (line[pos] == '#')
            {
                pos++;
                string index="";
                while (pos<line.length() && line[pos]!=',' && line[pos]!=' ')
                {
                    index += line[pos];
                    pos++;
                }
                res += ALA[stoi(index)];
            }
            else
            {
                res += line[pos];
                pos++;
            }
        }
        output.push_back(res);
        mdtp++;
    }
}

void print_ALA(vector<string>ALA)
{
    cout<<"---- Updated Argument List Array ----"<<endl;
    printf("%-7s%-2s%-10s\n","Index","|","Arguments");
    for (int i=0;i<ALA.size();i++)
    {
        printf("%-7d%-2s%-10s\n",i,"|",ALA[i].c_str());
    }
    cout<<endl;
}

void print_output(vector<string>output)
{
    cout<<"---- Expanded Macro Source Deck ----"<<endl;
    for (int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }
}

int main()
{
    ifstream inputfile("input.asm");
    string line;
    vector<MNT_row>MNT;
    vector<MDT_row>MDT;
    vector<string>ALA;
    vector<string>output;
    int mntc=1,mdtc=1;
    init_MDT(MDT,mdtc);
    init_MNT(MNT,mntc);
    init_ALA(ALA);
    while(getline(inputfile,line))
    {
        int mnt_index = get_mnt_row(line,MNT);
        if (mnt_index != -1)
        {
            expand_macro(MNT[mnt_index],MDT,output,ALA,line);
        }
        else
        {
            output.push_back(line);
        }
    }
    print_ALA(ALA);
    print_output(output);
}

/*
INPUT :
LOOP1 INCR DATA3,DATA2,DATA1
             DATA1 DC F'5'
             DATA2 DC F'10'
             DATA3 DC F'15'
             END
*/



