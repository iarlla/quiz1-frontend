const questions = [
    {
        question: "1. O que é Git e qual é a sua finalidade principal em desenvolvimento de software?",
        answers: {
            a: "Um sistema de gerenciamento de banco de dados.",
            b: "Uma linguagem de programação.",
            c: "Uma ferramenta de controle de versão.",
            d: "Um ambiente de desenvolvimento integrado (IDE)."
        },
        correctAnswer: "c"
    },
    // Adicione outras perguntas aqui
    // ...
];

function createQuiz() {
    const quizContainer = document.getElementById("quiz");
    let output = "";

    questions.forEach((question, index) => {
        const choices = [];
        for (const letter in question.answers) {
            choices.push(
                `<label>
                    <input type="radio" name="question${index}" value="${letter}">
                    ${letter}) ${question.answers[letter]}
                </label>`
            );
        }

        output += `<div class="question">${question.question}</div>
                   <div class="choices">${choices.join("")}</div>`;
    });

    quizContainer.innerHTML = output;
}

createQuiz();

function checkAnswers() {
    const answers = [];
    questions.forEach((question, index) => {
        const selector = `input[name=question${index}]:checked`;
        const userAnswer = (document.querySelector(selector) || {}).value;
        answers.push(userAnswer);
    });

    const score = calculateScore(answers);
    alert(`Você acertou ${score}/${questions.length} perguntas!`);
}

function calculateScore(answers) {
    let score = 0;
    answers.forEach((answer, index) => {
        if (answer === questions[index].correctAnswer) {
            score++;
        }
    });
    return score;
}

const submitButton = document.getElementById("submit-btn");
submitButton.addEventListener("click", checkAnswers);

