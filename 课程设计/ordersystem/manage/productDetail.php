<head>
	<link rel="stylesheet" type="text/css" href="../css/Style.css">
</head>
<body>
	<div class="manage_body">
		<div class="manage_top">
			<ul>
				<li><a>修改客户</a></li>
			</ul>
		</div>
		<?php
			require_once "../class/AutoLoad.php";
			$id = $_GET['id'];
			$product = new Product();
			$product->id = $id;
			$res = $product->getDetail();
		
			echo "<form action='productAction.php?op=update&id={$id}' method='post'>";
		?>
			<table class="ordertable">
				<tr class="tabletitle">
					<td>产品名称</td>
					<td>产品单价</td>
					<td>产品简介</td>
					<td>操作</td>
					<td>操作</td>
				</tr>
				<tr>
				<?php 
					echo '<td><input name="name" class="addorder" type="text" value="'.$res[0][0].'"></td>';
					echo '<td><input name="price" class="addorder" type="text" value="'.$res[0][1].'"></td>';
					echo '<td><input name="detail" class="addorder" type="text" value="'.$res[0][2].'"></td>';
				?>
				<td><input class="addorderbutton" type="submit" value="确认修改"></td>
				<td><input id="addorderbutton1" class="addorderbutton" type="reset" value="取消修改"></td>
				</tr>
			</table>
		</form>
		<a class="returnbutton" href="customerUpt.php?page=1">返回</a>
</body>