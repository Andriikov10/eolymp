x1, y1, r1, x2, y2, r2 = map(float, input().split())
dist2 = (x1-x2)**2 + (y1-y2)**2
res = 2

if(dist2 == 0 and r1 == r2):
        res = -1
elif(dist2 > (r1+r2)**2):
        res = 0
elif((r1-r2)**2 > dist2):
        res = 0
elif((r1+r2)**2 == dist2):        
        res = 1
elif((r2-r1)**2 == dist2):
        res = 1
print(res)

