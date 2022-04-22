boy = input().split(' ')
blen = len(boy)
girl = input().split(' ')
glen = len(girl)
round = input().split(' ')


for i in [int(i) for i in round]:
    bfinal = (i-1) % blen
    gfinal = (i-1) % glen
    print(boy[bfinal], girl[gfinal])

