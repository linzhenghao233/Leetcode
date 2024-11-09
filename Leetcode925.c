bool isLongPressedName(char* name, char* typed) {
    int len_name = strlen(name);
    int len_typed = strlen(typed);
    if (len_name > len_typed)
        return false;
    int index_name = 0;
    int index_typed = 0;

    while (index_typed < len_typed) {
        if (name[index_name] != typed[index_typed])
            return false;
        index_name++;
        index_typed++;
        while (index_typed < len_typed && typed[index_typed] == typed[index_typed - 1] && typed[index_typed] != name[index_name])
            index_typed++;
    }

    return index_name == len_name ? true : false;
}