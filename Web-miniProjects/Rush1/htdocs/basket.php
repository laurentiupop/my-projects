<?php

echo "<h3>Your cart</h3>";

$amount = "0";
if (isset($_SESSION["basket"]))
{
	foreach ($_SESSION["basket"] as $id => $item)
	{
		$name = $item['name']." ".$item['category']." candy";
		$item["pitch"] = str_replace("%name", $name, $itemm["pitch"]);
		echo "<div class = \"bsk_item\" title=\"".$item["pitch"]."\">
			<img src=\"resource/".$item["img"]."\"\" width=\"30px\" height=\"30px\" alt=\"".$item["name"]."\" />
			<h4 class = \"bsk_name\">".$name."</h4>
			<br />
			<span class = \"bsk_less\" data-id = \"".$id."\">&nbsp;&nbsp;&nbsp;</span>
			<input disabled id=\"".$id."\" size = \"2\" type = \"text\" class = \"bsk_quantity\" value=\"".$item["quantity"]."\" />
			<span class = \"bsk_more\" data-id = \"".$id."\">&nbsp;&nbsp;&nbsp;</span>
			<span class = \"bsk_price\">".$item["price"] * $item["quantity"]." €</span>
			<input type=\"hidden\" class=\"remaining\" value=\"".$item["remaining"]."\" />
			</div>";
		$amount += $item["price"] * $item["quantity"];
	}
	echo "<hr /><div id = \"total\">Total : <span id = \"amount\">$amount €</span></div>";
	echo "<a href = \"checkout.php\">Check out !</a>";
}
echo "</form>";
?>

<script type="text/javascript" charset="utf-8">

var truncIt = function(nb) {
	nb *= 100;
	nb = Math.floor(nb);
	nb /= 100;
	console.log(nb);
	return (nb);
};

var add = function($elem) {
	var id = $elem.attr("data-id");
	var val = $("#" + id).val();
	var price = parseFloat($elem.next().text());
	var remaining = $elem.next().next().val();

	if ((parseInt(val) + 1) <= parseInt(remaining))
	{
		price = price / parseFloat(val);
		$("#" + id).val(parseInt(val) + 1);
		price = price * (parseFloat(val) + 1);
		$elem.next().text(truncIt(price) + " €");

		var sum = 0;
		$(".bsk_price").each(function() {
			sum += parseFloat($(this).text());
		});
		$("#total").html("Total : <span id=\"amount\">" + sum + " €</span></div>");

		$.post("manage_basket.php", { update:"ok", ID: id, quantity: parseInt(val) + 1 });
	}
};

var minus = function($elem) {
	var id = $elem.attr("data-id");
	var val = $("#" + id).val();
	var price = parseFloat($elem.next().next().next().text());

	if (val - 1 > 0)
	{
		price = price / parseFloat(val);
		$("#" + id).val(val - 1);
		price = price * (parseFloat(val) - 1);
		$elem.next().next().next().text(truncIt(price) + " €");

		var sum = 0;
		$(".bsk_price").each(function() {
			sum += parseFloat($(this).text());
		});
		$("#total").html("Total : <span id=\"amount\">" + sum + " €</span></div>");
		$.post("manage_basket.php", { update:"ok", ID: id, quantity: val - 1 });
	}
	else
	{
		window.location.href = 'manage_basket.php?action=remove_cart&item=' + id;
	}
};

$(".bsk_less").click(function() {
	minus($(this));
});

$(".bsk_more").click(function() {
	add($(this));
});
</script>
