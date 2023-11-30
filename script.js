// script.js

// A simple function to display an alert
function showAlert() {
    alert("Hello! This is a simple alert from the script.js file.");
}

// Example of manipulating the DOM using JavaScript
document.addEventListener("DOMContentLoaded", function() {
    // Change the text color of the header
    var header = document.querySelector('header');
    header.style.color = 'red';

    // Add a click event listener to the main content area
    var main = document.querySelector('main');
    main.addEventListener('click', function() {
        showAlert();
    });
});
