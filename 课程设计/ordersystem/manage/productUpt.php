<head>
	<link rel="stylesheet" type="text/css" href="../css/Style.css">
</head>
<body>
	<div class="manage_body">
		<div class="manage_top">
			<ul>
				<li><a>修改产品</a></li>
			</ul>
		</div>
		<table class="ordertable">
			<tr class="tabletitle">
				<td>产品编号</td>
				<td>产品名称</td>
				<td>产品单价</td>
				<td>产品简介</td>
				<td>操作</td>
			</tr>
			<?php
				require_once "../class/AutoLoad.php";
				$pagenum=8;		//每页个数
				$page=$_GET['page'];	//当前页数
				$product = new Product();
				$countarr=$product->countProduct(); 	//查询总个数
				$count=$countarr[0][0];
				$pagecount=ceil($count/$pagenum); 	//总页数
				$start=($page-1)*$pagenum;		//查询开始值
				$res=$product->listProduct($start, $pagenum);
				foreach ($res as $row) {
					
						echo '<tr class="tablebody">';
						echo "<td>{$row[0]}</td>";
						echo "<td>{$row[1]}</td>";
						echo "<td>{$row[2]}</td>";
						echo "<td>{$row[3]}</td>";
						echo '<td><a class="tablebody_a" href="productDetail.php?id='.$row[0].'">修改</a></td>';
						echo '</tr>';
				
				}
			?>
		</table>
	</div>
	<div class="page">
		
		<?php

			if($page==1){
				if($pagecount==1){
					$pagelast=1;
					$pagenext=$pagecount;
				}else{
					$pagelast=1;
					$pagenext=$page+1;
				}
			}else if($page==$pagecount){
					$pagelast=$page-1;
					$pagenext=$pagecount;
			}else{
					$pagelast=$page-1;
					$pagenext=$page+1;
			}

			echo '<a href="stuffListdel.php?page=1">首页</a>';
			echo '<a href="stuffListdel.php?page='.$pagelast.'">上一页</a>';
			if($page==1){
				if($pagecount==1){
					echo '<a id="focue_a">'.$page.'</a>';
				}else{
					echo '<a id="focue_a">'.$page.'</a>';
					echo '<a href="stuffListdel.php?page='.$pagenext.'">'.$pagenext.'</a>';
				}
			}else if($page==$pagecount){
				echo '<a href="stuffListdel.php?page='.$pagelast.'">'.$pagelast.'</a>';
				echo '<a id="focue_a">'.$page.'</a>';
			}else{
				echo '<a href="stuffListdel.php?page='.$pagelast.'">'.$pagelast.'</a>';
				echo '<a id="focue_a">'.$page.'</a>';
				echo '<a href="stuffListdel.php?page='.$pagenext.'">'.$pagenext.'</a>';
			}

			echo '<a href="stuffListdel.php?page='.$pagenext.'">下一页</a>';
			echo '<a href="stuffListdel.php?page='.$pagecount.'">末页</a>';
		?>
		
	</div>
</body>