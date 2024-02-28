words = input().upper()
words_sets = list(set(words))

cnt_list = []
for x in words_sets:
    cnt = words.count(x)
    cnt_list.append(cnt)

if cnt_list.count(max(cnt_list)) > 1: 
    print('?')
else :
    max_index = cnt_list.index(max(cnt_list))  
    print(words_sets[max_index])