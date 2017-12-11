list1 = []
for i in range(0,10):
    n = int(raw_input())
    list1.append(n)
list2 = list1[:5]
list3 = []
list4 = []
list3.append(list2)
list4.extend(list2)
list5 = list1[:]

print list1
print list2
print list3
print list4
print list5