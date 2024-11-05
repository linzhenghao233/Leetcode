char* losingPlayer(int x, int y) {
    return (int)fmin(x, y / 4) % 2 ? "Alice" : "Bob";
}