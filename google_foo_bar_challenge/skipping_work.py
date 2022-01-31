
def solution(x,y):  
  arrary2d = [x,y]  
  listall = [y for x in arrary2d for y in x]  
  distinct = list(set(listall))  
  same_values = [x for x in distinct if listall.count(x) % 2 == 0]  
  missed = [x for x in distinct if x not in same_values ]  
  return missed[0]
