/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) return "";
    for (int i = 0; i < strlen(strs[0]); i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || strs[j][i] != c) {
                char *prefix = (char *)malloc(i + 1);
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    return strs[0];
    
}
// @lc code=end

