// 정수 삼각형

import java.util.Arrays;

public class P43105 {

    public int solution(int[][] triangle) {
        int[][] m = new int[500][500];

        m[0][0] = triangle[0][0];
        for(int i = 1; i < triangle.length; i++) {
            for (int j = 0; j < triangle[i].length; j++) {
                if (j == 0) {
                    m[i][j] = m[i - 1][j] + triangle[i][j];
                }
                else if (j == i) {
                    m[i][j] = m[i - 1][j - 1] + triangle[i][j];
                }
                else {
                    m[i][j] = Math.max(m[i - 1][j] + triangle[i][j], m[i - 1][j - 1] + triangle[i][j]);
                }
            }
        }

        return Arrays.stream(m[triangle.length - 1]).max().getAsInt();
    }

    public static void main(String[] args) {
        P43105 p = new P43105();
        System.out.println(p.solution(new int[][] {{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}})); // 30
    }
}
