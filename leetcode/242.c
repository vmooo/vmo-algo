bool isAnagram(char* s, char* t) {

    size_t n = 256;

    int cnt1[n + 1];
    int cnt2[n + 1];

    for (size_t i = 0; i < n; ++i) {
        cnt1[i] = 0;
        cnt2[i] = 0;
    }

    while(*s != '\0') {
        ++cnt1[*s];
        ++s;
    }

    while(*t != '\0') {
        ++cnt2[*t];
        ++t;
    }

    for (size_t i = 0; i < n; ++i) {
        if (cnt1[i] != cnt2[i]) {
            return false;
        }
    }

    return true;
}