// 야근 지수

import java.util.Collections;
import java.util.PriorityQueue;

public class P12927 {
    public long solution(int n, int[] works) {
        long answer = 0;
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (int w : works) {
            pq.add(w);
        }

        while (n > 0) {
            int poll = pq.poll();

            if (poll == 0) {
                break;
            }

            pq.add(poll - 1);
            n--;
        }

        while (!pq.isEmpty()) {
            int poll = pq.poll();
            answer += poll * poll;
        }

        return answer;
    }

    public static void main(String[] args) {
        P12927 p = new P12927();
        System.out.println(p.solution(4, new int[] { 4, 3, 3 })); // 12
        System.out.println(p.solution(1, new int[] { 2, 1, 2 })); // 6
        System.out.println(p.solution(3, new int[] { 1, 1 })); // 0
    }
}