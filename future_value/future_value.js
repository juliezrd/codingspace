//"use strict";
var $ = function(id) {
	return document.getElementById(id);
};

var calculateFV = function(investment, rate, years){
	var futureValue = investment;
	for (var i =1; i <= years; i++) {
		futureValue += futureValue* (rate/100);
	}
	rate = rate/100;
	futureValue = futureValue.toFixed(2);
	return futureValue;
	
};
function processEntries(){
	
	var investment = parseFloat(document.getElementById("investment").value);
	var rate = parseFloat(document.getElementById("annual_rate").value);
	var years = parseInt(document.getElementById("years").value);
	//var futureValue = parseFloat(document.getElementById("futureValue").value).toFixed(2);
	
	var allValid = true;
	
	if (isNaN(investment) || investment<0 || investment>100000) {
		$("investment_error").firstChild.nodeValue = "investment must greater than 0 or less than 100,000";
		allValid = false;
	}
	else {
		$("investment_error").firstChild.nodeValue = "";
	}
	
	if (isNaN(rate) || rate<0 || rate>15) {
		$("rate_error").firstChild.nodeValue = "rate must greater than 0 or less than 15%";
		allValid = false;
	}
	else {
		$("rate_error").firstChild.nodeValue = "";
	}
	
	if (isNaN(years) || years<0 || years>12) {
		$("years_error").firstChild.nodeValue = "years must greater than 0 or less than 12";
		allValid = false;
	}
	else {
		$("years_error").firstChild.nodeValue = "";
	}
	
	if (allValid) {
		$("future_value").value = calculateFV(investment, rate, years);
	}
};


window.onload = function(){
	$("calculate").onclick= processEntries;
	$("investment").focus;
};
	
//function onloadHandler(){
	//document.getElementById("investment").focus();
	//let button = document.querySelector("#calculate");
	//button.addEventListener("click", ()=> {processEntries();});
//}
