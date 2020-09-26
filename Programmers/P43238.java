// 입국심사

import java.util.Arrays;

public class P43238 {
    public long solution(int n, int[] times) {
        Arrays.sort(times);
        long min = 0, max = times[times.length - 1], mid = 0, answer;
        max *= n;
        answer = max;

        while (min <= max) {
            mid = (min + max) / 2;
            long sum = 0;

            for (int t : times) {
                sum += (mid / t);
            }

            if (sum < n) {
                min = mid + 1;
            }
            else {
                if (mid < answer) {
                    answer = mid;
                }
                max = mid - 1;
            }
        }

        return answer;
    }

    public static void main(String[] args) {
        P43238 p = new P43238();
        System.out.println(p.solution(6, new int[] {7, 10})); // 28
    }
}
