
def cordinate(src):
    return src / 8, src % 8

def short_path(sx, sy, chess):
    arr = [(sx, sy)]
    while arr:
        x, y = arr.pop(0)
        for i in [[1,2],[-1,2],[1,-2],[-1,-2],[2,1],[-2,1],[2,-1],[-2,-1]]:
          nx, ny = x + i[0], y + i[1]
          if 0 <= nx <= 7 and 0 <= ny <= 7:
              if chess[nx][ny] is None:
                  chess[nx][ny] = chess[x][y] + 1
                  arr.append((nx, ny)) 

def solution(src, dest):
    chess = [[None for i in range(8)] for i in range(8)]
    sx, sy = cordinate(src)
    dx, dy = cordinate(dest)
    chess[sx][sy] = 0
    short_path(sx, sy, chess)
    return chess[dx][dy]

print solution(0, 1)
