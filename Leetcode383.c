bool canConstruct(char* ransomNote, char* magazine) {
    int* hash = (int*)calloc(26, sizeof(int));
    int ransomNote_len = strlen(ransomNote);
    int magazine_len = strlen(magazine);

    for (int i = 0; i < ransomNote_len; i++)
        hash[ransomNote[i] - 'a']--;
    for (int i = 0; i < magazine_len; i++)
        hash[magazine[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (hash[i] < 0) {
            free(hash);
            return false;
        }
    }

    free(hash);
    return true;
}