package Lexical_analysis;

import java.util.*;
import java.io.*;

class Lexical_analyser {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(new File("abc.txt"));
        String i[] = {"main"};
        String l[] = {"a", "b", "c"};
        String t[] = {",", ";", "(", ")", "{", "}"};
        String o[] = {"+", "=", "*"};
        String k[] = {"int", "void"};

        FileWriter fw1 = new FileWriter("identifier.txt", true);
        FileWriter fw2 = new FileWriter("literal.txt", true);
        FileWriter fw3 = new FileWriter("terminal.txt", true);
        FileWriter fw4 = new FileWriter("operator.txt", true);
        FileWriter fw5 = new FileWriter("keyword.txt", true);

        while(sc.hasNext())
        {
            String b = sc.next();
            
            if(b.equals(i[0])) {
                System.out.println(b + " is an identifier");
                fw1.write(b + " ");
            }
            else if (b.equals(l[0]) || b.equals(l[1]) || b.equals(l[2])) {
                System.out.println(b + " is a literal");
                fw2.write(b + " ");
            }
            else if (b.equals(t[0]) || b.equals(t[1]) || b.equals(t[2]) || b.equals(t[3])|| b.equals(t[4]) || b.equals(t[5])) {
                System.out.println(b + " is a terminal");
                fw3.write(b + " ");
            }
            else if (b.equals(o[0]) || b.equals(o[1]) || b.equals(o[2])) {
                System.out.println(b + " is a operator");
                fw4.write(b + " ");
            }
            else if(b.equals(k[0]) || b.equals(k[1])) {
                System.out.println(b + " is a keyword");
                fw5.write(b + " ");
            }
        }

        fw1.close();
        fw2.close();
        fw3.close();
        fw4.close();
        fw5.close();
    }
}