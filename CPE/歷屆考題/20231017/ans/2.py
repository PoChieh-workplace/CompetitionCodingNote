def ids(x:str):
    if x>='0' and x<='9':
        return ord(x)-48
    elif x>='A' and x<='Z':
        return ord(x)-55
    elif x>='a' and x<='z':
        return ord(x)-61
    else:
        return 0


while(True):
    string = [ids(i) for i in input()]
    max_num = max(string)
    total = sum(string)
    if_p = False
    for i in range(max_num,62):
        if total%(i)==0:
            print(i+1)
            if_p=True
            break
    if not if_p:
        print("such number is impossible!")
    