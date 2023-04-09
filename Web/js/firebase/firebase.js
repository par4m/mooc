// Import the functions you need from the SDKs you need
import { initializeApp } from 'firebase/app'
import { getAnalytics } from 'firebase/analytics'
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: 'AIzaSyCLQQqMujxzbSApS6uKy5YFbGapaZ9bAfI',
  authDomain: 'udemy-modern-javascript-51416.firebaseapp.com',
  projectId: 'udemy-modern-javascript-51416',
  storageBucket: 'udemy-modern-javascript-51416.appspot.com',
  messagingSenderId: '1071402254396',
  appId: '1:1071402254396:web:23a09e7578e30e47b98339',
  measurementId: 'G-NBYBDP6VJC',
}

// Initialize Firebase
const app = initializeApp(firebaseConfig)
const analytics = getAnalytics(app)

console.log('connected')
