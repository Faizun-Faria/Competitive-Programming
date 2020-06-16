Formula: 

1D prefix sum: update: pref[i] = pref[i-1] + a[i], query: pref[r] - pref[l-1] 
2D prefix sum: update: pref[x][y] = a[x][y] + pref[x-1][y] + pref[x][y-1] - pref[x-1][y-1]
		Query: pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1]
3D prefix sum: update: pref[x][y][z] = a[x][y][z] + pref[x-1][y][z] + pref[x][y-1][z] + pref[x][y][z-1] 				- pref[x-1][y-1][z] - pref[x-1][y][z-1] - pref[x][y-1][z-1] + pref[x-1][y-1][z-1]
		Query: ……..

1D diff: update: D[l]++, D[r+1]--, Query: D[i] = D[i] + D[i-1]
2D diff: update: D[x1][y1]++, D[x2+1][y1]--, D[x1][y2+1]--, D[x2+1][y2+1]++
	Recons: D[x][y] = D[x][y-1] + D[x-1][y] - D[x-1][y-1]
3D diff: update: similar 
