<div class="item-list">
    <ul class="pager">
      <?php for ($n = 0; $n < $pages; $n++) : ?>
          <li class="pager-item">
              <a title="Go to page <?php print $n + 1; ?>"
                 href="/skyfish/browsebydir/<?php print $dir_id; ?>?page=<?php print $n; ?>">
                <?php print $n + 1; ?></a>
          </li>
      <?php endfor; ?>
    </ul>
</div>