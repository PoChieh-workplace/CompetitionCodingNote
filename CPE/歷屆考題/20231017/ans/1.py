count = int(input())
for i in range(count):
    letter,word = [int(o) for o in input().split(" ")]
    length = letter*word
    words = []
    for j in range(word):
        words.append(input())
    
    for j in range(word-1):
        for k in range(letter,0,-1):
            if words[j][-k:]==words[j+1][:k]:
                length-=k
                break # 記得要跳出
    print(length)