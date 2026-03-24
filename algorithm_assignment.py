my_list = []

for i in range(1, 10):
    my_list.append(i)

print("Original list:", my_list)
print("Length of list: ", len(my_list))

y = 1

for x in range(len(my_list)):
    if x < len(my_list):
        if my_list[x] == y:
            y = y + 1
        else:
            del my_list[x]
            break
    else:
        break

print("\nThe list with unique elements only.")
print(my_list)
