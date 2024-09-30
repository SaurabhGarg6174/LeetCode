class Solution {
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        List<String> res = new ArrayList<>();
        for(String word: words){
            if(check(word, pattern)){
                res.add(word);
            }
        }
        return res;
    }

    boolean check(String word, String pat){
        for(int i = 0; i < word.length(); i++){
            if(word.indexOf(word.charAt(i)) != pat.indexOf(pat.charAt(i))) return false;
        }
        return true;
    }
}