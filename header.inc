<header>
    <nav>
        <ul class="menu">
            <li><a href="index.php" <?php echo (basename($_SERVER['PHP_SELF']) == 'index.php') ? 'class="active"' : ''; ?>>Home</a></li>
            <li><a href="jobs.php" <?php echo (basename($_SERVER['PHP_SELF']) == 'jobs.php') ? 'class="active"' : ''; ?>>Jobs</a></li>
            <li><a href="apply.php" <?php echo (basename($_SERVER['PHP_SELF']) == 'apply.php') ? 'class="active"' : ''; ?>>Apply</a></li>
            <li><a href="about.php" <?php echo (basename($_SERVER['PHP_SELF']) == 'about.php') ? 'class="active"' : ''; ?>>About</a></li>
            <li><a href="enhancements.php" <?php echo (basename($_SERVER['PHP_SELF']) == 'enhancements.php') ? 'class="active"' : ''; ?>>Enhancements</a></li>
            <li><a href="mailto:info@techcorpsolutions.com.au">Contact</a></li>
        </ul>
    </nav>
</header>