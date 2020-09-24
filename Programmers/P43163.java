// 단어 변환

import java.util.Arrays;

public class P43163 {
    private int N, m;
    String T;
    boolean[] ck;

    private void DFS(int level, String str, String[] words) {
        if (level > N) return;

        if (str.equals(T)) {
            if (level < m) {
                m = level;
            }
        }
        else {
            for (int k = 0; k < words.length; k++) {
                if (ck[k]) continue;

                int dif = 0;
                for (int i = 0; i < words[k].length(); i++) {
                    if (words[k].charAt(i) != str.charAt(i)) {
                        dif++;
                    }
                }

                if (dif == 1) {
                    ck[k] = true;
                    DFS(level + 1, words[k], words);
                    ck[k] = false;
                }
            }
        }
    }

    public int solution(String begin, String target, String[] words) {
        boolean find = false;

        for (String w : words) {
            if (w.equals(target))
                find = true;
        }

        if (find) {
            N = words.length;
            m = 100;
            T = target;
            ck = new boolean[N];
            Arrays.fill(ck, false);

            DFS(0, begin, words);

            return m == 100 ? 0 : m;
        }
        else {
            return 0;
        }
    }

    public static void main(String[] args) {
        P43163 p = new P43163();
        System.out.println(p.solution("hit", "cog", new String[] { "hot", "dot", "dog", "lot", "log", "cog" })); // 4
        System.out.println(p.solution("hit", "hhh", new String[] { "hhh", "hht" })); // 2
        System.out.println(p.solution("hit", "wow", new String[] { "hot", "dog", "dot", "wow" })); // 0
    }
}
