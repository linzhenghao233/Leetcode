int romanToInt(char* s) {
    int total = 0, index = 0;

    while (index < strlen(s)) {
        switch (s[index]) {
        case 'I':
            total++,
                index++;
            break;
        case 'V':
            if (index > 0 && s[index - 1] == 'I')
                total += 5 - 2;
            else
                total += 5;
            index++;
            break;
        case 'X':
            if (index > 0 && s[index - 1] == 'I')
                total += 10 - 2;
            else
                total += 10;
            index++;
            break;
        case 'L':
            if (index > 0 && s[index - 1] == 'X')
                total += 50 - 20;
            else
                total += 50;
            index++;
            break;
        case 'C':
            if (index > 0 && s[index - 1] == 'L')
                total += 100 - 100;
            else if (index > 0 && s[index - 1] == 'X')
                total += 100 - 20;
            else
                total += 100;
            index++;
            break;
        case 'D':
            if (index > 0 && s[index - 1] == 'C')
                total += 500 - 200;
            else
                total += 500;
            index++;
            break;
        case 'M':
            if (index > 0 && s[index - 1] == 'D')
                total += 1000 - 1000;
            else if (index > 0 && s[index - 1] == 'C')
                total += 1000 - 200;
            else
                total += 1000;
            index++;
            break;
        }
    }
    return total;
}