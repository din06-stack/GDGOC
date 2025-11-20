const label = document.getElementById('label');
const btnKurang = document.getElementById('btnKurang');
const btnReset = document.getElementById('btnReset');
const btnTambah = document.getElementById('btnTambah');

let count = 0;

const updateLabel = () => {
    label.textContent = count;
};

btnKurang.addEventListener('click', function (){
    count--;
    console.log(count);
    updateLabel ();
});

btnReset.addEventListener('click', () => {
    count = 0;
    console.log(count);
    updateLabel ();
});

btnTambah.addEventListener('click', function (){
    count++;
    console.log(count);
    updateLabel ();
});

