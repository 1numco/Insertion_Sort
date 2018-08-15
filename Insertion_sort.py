import numpy
def sort_des(mass):
    for i in range(1,len(mass)):
        temp=mass[i]
        j=i;
        while(j>0 and mass[j-1]<temp):
            mass[j]=mass[j-1]
            j-=1
        mass[j]=temp
    return mass
def sort_as(mass):
    for i in range(1,len(mass)):
        temp=mass[i]
        j=i;
        while(j>0 and mass[j-1]>temp):
            mass[j]=mass[j-1]
            j-=1
        mass[j]=temp
    return mass
n = int(input("Enter size of array"))
mass = numpy.random.randint(1000, size=n)
for i in range(n):
    print("", mass[i]," ",end="")
print("")
a = int(input("Choose how to sort: ascending or descending(enter 1 or 2 respectively)."))
if(a==1):
    sort_as(mass)
if(a==2):
    sort_des(mass)
print("The array is sorted: ",end="")
for i in range(n):
    print("", mass[i]," ",end="")