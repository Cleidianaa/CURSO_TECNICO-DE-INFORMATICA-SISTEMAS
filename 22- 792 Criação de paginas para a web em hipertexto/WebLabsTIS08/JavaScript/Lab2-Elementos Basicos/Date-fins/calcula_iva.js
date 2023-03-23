
window.addEventListener('load', main);

function main() {
    const computeTotalBtn = document.getElementById('computeTotal');
    computeTotalBtn.addEventListener('click', getTotal);
}

function getTotal() {
    const price = parseFloat(document.getElementById('price').value);
    const vatRate = parseFloat(document.getElementById('vatRate').value);
    let deductionRate = document.getElementById('deductionRate').value;
    deductionRate = deductionRate ? parseFloat(deductionRate) : 0;

    // if (deductionRate) {
    //     deductionRate = parseFloat(deductionRate);
    // }
    // else {
    //     deductionRate = 0;
    // }

    const total = price * (1 + vatRate/100) * (1 - deductionRate/100) ;

    const totalPanel = document.getElementById('totalPanel');
    totalPanel.innerHTML = `Total : ${total.toFixed(2)} € `;
}





/*
let nums = [10, 5, -10, -1, 44, 32];
let nomes = ["alberto", "arnaldo", "antónio"];


function mostra(elementos) {    // elementos é um array de qq coisa
    for (let i = 0; i < elementos.length; i += 1) {
        console.log(elementos[i]);
    }
}



function mostra(elementos) {    // elementos é um array de qq coisa
    for (let elem of elementos) {
        console.log(elem);
    }
}

function mostra(elementos, criterio) {    // elementos é um array de qq coisa
    for (let elem of elementos) {
        if (criterio(elem)) {
            console.log(elem);
        }
    }
}

function e_par(num) {
    return num % 2 === 0;
}
mostra(nums, e_par);

mostra(nums, function(num) { 
    return num % 2 === 0;
});
*/