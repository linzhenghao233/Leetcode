

int game(int* guess, int guessSize, int* answer, int answerSize) {
    return (guess[0] == answer[0]) + (guess[1] == answer[1]) + (guess[2] == answer[2]);
}
