window.addEventListener('load', main);

function main() {
    const computeTotalBtn = document.getElementById('computeTotal');
    computeTotalBtn.addEventListener('click', getTotal);
}

function getTotal() {
    const price = parseFloat(document.getElementById('singleprice').value);
    const vatRate = parseFloat(document.getElementById('vatRate').value);
    let tipRate = document.getElementById('tipRate').value;
    tipRate = tipRate ? parseFloat(tipRate) : 0;

    if (tipRate) {
        tipRate = parseFloat(tipRate);
    }
     else {
       tipRate = 0;
    }
    const total = singleprice * (1 + vatRate/100) * (1 - tipRate/100) ;

    const totalPanel = document.getElementById('computeTotal');
    computePanel.innerHTML = `Total : ${total.toFixed(2)} € `;
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