# https://www.acmicpc.net/problem/5554

t=sum(map(int,open(0).readline().split()))
print(t//60,t%60,sep='\n')