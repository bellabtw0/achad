<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Snus R.us</title>

    <!-- Trippy Fonts -->
    <link href="https://fonts.googleapis.com/css2?family=Rubik+Glitch&family=Fugaz+One&family=Monoton&display=swap" rel="stylesheet">

    <style>
        body {
            background: radial-gradient(circle, #ff00ff, #00ffff, #ff8800, #0044ff);
            background-size: 400% 400%;
            animation: bgShift 10s infinite alternate;
            color: white;
            text-align: center;
            padding: 40px;
            font-family: 'Rubik Glitch', 'Fugaz One', 'Monoton', cursive;
            animation: fontCycle 1.5s infinite alternate;
        }

        @keyframes bgShift {
            0% { background-position: 0% 0%; }
            50% { background-position: 100% 50%; }
            100% { background-position: 0% 100%; }
        }

        @keyframes fontCycle {
            0% { font-family: 'Rubik Glitch'; }
            50% { font-family: 'Fugaz One'; }
            100% { font-family: 'Monoton'; }
        }

        h1 {
            font-size: 4rem;
            margin-bottom: 20px;
            text-shadow: 0 0 20px white;
        }

        a {
            color: yellow;
            font-size: 1.4rem;
            display: block;
            margin-top: 20px;
            text-decoration: none;
        }

        a:hover {
            text-shadow: 0 0 10px yellow;
        }
    </style>
</head>

<body>
    <h1>Snus R.us</h1>

    <a href="offer.html">What We Offer</a>
    <a href="buy.html">Where to Buy</a>
</body>
</html>
