# https://www.geeksforgeeks.org/crossover-in-genetic-algorithm/
# sauce: https://www.geeksforgeeks.org/python-single-point-crossover-in-genetic-algorithm/

# library to generate a random number
import random

# function for implementing the single-point crossover


def crossover(l, q):

	# converting the string to list for performing the crossover
	l = list(l)
	q = list(q)

# generating the random number to perform crossover
	k = random.randint(0, 15)
	print("Crossover point :", k)

# interchanging the genes
	for i in range(k, len(s)):
		l[i], q[i] = q[i], l[i]
	l = ''.join(l)
	q = ''.join(q)
	print(l)
	print(q, "\n\n")
	return l, q


# patent chromosomes:

s = '1100110110110011'
p = '1000110011011111'
print("Parents")
print("P1 :", s)
print("P2 :", p, "\n")

# function calling and storing the off springs for
# next generation crossover
for i in range(5):
	print("Generation ", i+1, "Childrens :")
	s, p = crossover(s, p)
