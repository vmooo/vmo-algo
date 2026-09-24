bool isPalindrome(char* s) {
    char *end = s;

    while (*end != '\0') {
        ++end;
    }
    --end;

    while (s < end) {
        if (!isalpha(*s) && !isdigit(*s)) {
            ++s;
            continue;
        }
        if (!isalpha(*end) && !isdigit(*end)) {
            --end;
            continue;
        }
        if (tolower(*s) != tolower(*end)) {
            return false;
        }
        ++s;
        --end;
    }

    return true;
}