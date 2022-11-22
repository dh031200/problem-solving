#include<bits/stdc++.h>
using namespace std;
/*int main() {
	int N, M, B_O, i, j, input, mh_c = 0;
	int height_O[257] = { 0 };
	int height[257] = { 0 };
	int m_t = 0;
	int m_t_i = 0;
	int mh_int = 0;
	vector<int> mh;
	cin >> N >> M >> B_O;
	//vector<vector<int>> H(N, vector<int>(M));
	for (i = 0;i < N;i++) {
		for (j = 0;j < M;j++) {
			cin >> input;
			//H[i][j] = t;
			height_O[input] += 1;
		}
	}
	//for (i = 0;i < 257;i++) {		// 최대 높이
	//	if (height[i] > mh_c) {
	//		mh.pus=
	//		mh_c = height[i];
	//	}
	//}
	for (i = 0;i < 257;i++) {		// 최대 높이
		if (height_O[i] >= mh_c) {
			mh.push_back(i);
			mh_c = height_O[i];
		}
	}
	vector<int> t(mh.size());
	vector<int> B(mh.size());
	vector<int> B_U(mh.size());
	for (i = 0;i < B.size();i++) {
		B[i] = B_O;
	}
	for (j = 0;j < mh.size();j++) {
		for (i = 0;i < 257;i++)
			height[i] = height_O[i];
		//for(i=0;i<mh.size();i++)
		//cout << "mh[" << j << "] : " << mh[j] << '\n';
		//i = 256;
		//while(height[mh[j]] != (N*M)){
		//	if (i < 0)
		//		i = 256;
		for (i = 256;i > mh[j];i--) {
			//cout << "i : " << i << '\n';
			//cout << "height[" << i << "] : " << height[i] << '\n';
			//cout << "t : " << t[j] << '\n';
			//if (i == mh[j]) {
			//	i--;
			//	continue;
			//}
			//if (i > mh[j]) {
			t[j] = t[j] + (height[i] * 2);
			B_U[j] += height[i];
			height[i - 1] += height[i];
			height[i] = 0;
			//}
			//if (i < mh[j]) {
			//	if (B[j] >= height[i]) {
			//		B[j] -= height[i];
			//		height[i + 1] += height[i];
			//		t[j] += height[i];
			//		height[i] = 0;
			//	}
			//}
			//i--;
		}
		for (i = 0;i < mh[j];i++) {
			B_U[j] -= height[i];
			height[i + 1] += height[i];
			t[j] += height[i];
			height[i] = 0;
		}
		if (B[j] < B_U[j])
			t[j] = pow(2, 31) - 1;
			//cout << "B: " << B[j] << '\n';
			//cout << "t: " << t[j] << '\n';
	}
	m_t = t[0];

	for (i = 0;i < t.size();i++) {
		if (t[i] <= m_t) {
			m_t = t[i];
			m_t_i = i;
		}
	}
	cout << m_t << ' ' << mh[m_t_i] << '\n';
}*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, B, i, j, I, T, minT,rH;
	int SB;
	int minH = 257, maxH = 0;
	int OH[257] = { 0 };
	int H[257] = { 0 };
	minT = pow(2, 31) - 1;
	cin >> N >> M >> B;
	for (i = 0;i < N;i++) {
		for (j = 0;j < M; j++) {
			cin >> I;
			OH[I]++;
			if (I > maxH)
				maxH = I;
			if (I < minH)
				minH = I;
		}
	}
	for (i = minH;i <= maxH;i++) {
		for (j = 0;j <= 256;j++)
			H[j] = OH[j];
		SB = 0;
		T = 0;
		for (j = maxH;j > i;j--) {
			SB += H[j];
			T += H[j] * 2;
			H[j - 1] += H[j];

		}
		for (j = minH;j < i;j++) {
			SB -= H[j];
			T += H[j];
			H[j + 1] += H[j];
		}
		if (B + SB < 0)
			continue;
		if (T <= minT) {
			minT = T;
			rH = i;
		}
	}
	cout << minT << ' ' << rH;
}