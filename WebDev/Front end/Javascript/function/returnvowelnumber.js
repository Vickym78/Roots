const cntvowel = (s) => {
    var c = 0;
    for (const char of s) {
        if (char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u') {
            c++;
        }
    }
    console.log(c);
}

cntvowel("aeiou");
