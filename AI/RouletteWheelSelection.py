# sauce: https://ebckurera.wordpress.com/2017/10/05/implementing-roulette-wheel-in-python/

import numpy as np
import random as rand
 
roulette_wheel = np.array((0))
slot_count = 0
 
def init_roul_wheel(value_array):
 
    slot_count = 0
    i=0
    arrsize = value_array.size
    while i < arrsize/2:
        slot_count = slot_count + value_array[2*i+1]
        i = i + 1
    roulette_wheel = np.zeros((slot_count),dtype=np.int)
    #print(roulette_wheel)
    i = 0
 
    while i < arrsize/2:
        rv = value_array[2*i]
        bv = value_array[2*i+1]
        j = 0
        while j<bv:
            t = rand.randint(0,slot_count-1)
            wheel_alloc = roulette_wheel[t]
            if wheel_alloc == 0:
                roulette_wheel[t] = rv
                j = j + 1
        i = i + 1
    return (roulette_wheel)
 
def spin(rw):
    slot_count = rw.size
    randno = rand.randint(0,10000)
    rot_degree = randno%360
    rot_unit = 360/slot_count
    rol_no = (rot_degree - (rot_degree%(rot_unit)))/rot_unit
    rol_value = rw[int(rol_no)]
    return rol_value    
 
wheel_vector = np.array([10,1,20,2,30,2,40,4,50,5,60,4,70,3,80,2,90,2])
x = init_roul_wheel(wheel_vector)
#print (spin(x))
 
cal_rounds = 1000000
 
results = np.zeros((cal_rounds),dtype=np.int);
 
i =0
 
while i<cal_rounds:
    value = spin(x)
    results[i] = value
    i = i +1
 
unique, counts = np.unique(results, return_counts=True)
print ("RW Vector", wheel_vector, "\n")
print ("Roulette Wheel", x)
print ("Results: ",unique,"\n\t" ,counts)
 
i = 0
while i<counts.size:
    #print (unique[i], "occured " + str(counts[i]))
    precentage = (counts[i]*100)/np.sum(counts)
    print (unique[i]," precentage - ",str(precentage) + ' %','('+str(round(precentage))+')')
    i = i +1
