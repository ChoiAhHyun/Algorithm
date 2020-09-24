// 등굣길

public class P42898 {
    public int solution(int m, int n, int[][] puddles) {
        final int MOD = 1000000007;
        int[][] mat = new int[n][m];

        for (int[] p : puddles) {
            mat[p[1] - 1][p[0] - 1] = -1;
        }

        mat[0][0] = 1;
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j == 0) continue;

                if (mat[i][j] == -1) {
                    mat[i][j] = 0;
                    continue;
                }

                if (i == 0) {
                    mat[i][j] = mat[i][j - 1];
                }
                else if (j == 0) {
                    mat[i][j] = mat[i - 1][j];
                }
                else {
                    mat[i][j] = (mat[i][j - 1] + mat[i - 1][j]) % MOD;
                }
            }
        }

        return mat[n - 1][m - 1] % MOD;
    }

    public static void main(String[] args) {
        P42898 p = new P42898();
        System.out.println(p.solution(4, 3, new int[][] {{2, 2}})); // 4
    }
}
