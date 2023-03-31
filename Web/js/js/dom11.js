const button = document.querySelector('button')
const popup = document.querySelector('.popup-wrapper')
const close = document.querySelector('.popup-close')

button.onclick = () => {
  popup.style.display = 'block'
}

close.onclick = () => {
  popup.style.display = 'none'
}

popup.onclick = () => {
  popup.style.display = 'none'
}
