H, W = map(int, input().split())

X = [list(map(int, input().split())) for _ in range(H)]
Q = int(input())
Y = [list(map(int, input().split())) for _ in range(Q)]

# 累積和を格納する配列AのサイズをH+1 x W+1にする
A = [[0] * (W + 1) for _ in range(H + 1)]

# 累積和の計算
for h in range(1, H+1):
    for w in range(1, W+1):
        # 左のセル、上のセル、左上のセルの累積和を使って現在のセルの累積和を計算
        A[h][w] = A[h][w - 1] + A[h - 1][w] - A[h - 1][w - 1] + X[h - 1][w - 1]

# クエリに応じた範囲の和の計算
for q in range(Q):
    y1, x1, y2, x2 = Y[q]
    # 範囲の和を求める式を修正
    print(A[y2][x2] - A[y2][x1 - 1] - A[y1 - 1][x2] + A[y1 - 1][x1 - 1])
