let project = HEMTT.project();

let release_folder = HEMTT_OUT;

if (release_folder.exists()) {
    let releases = HEMTT_RFS.join("releases");
    let dst = releases.join("@" + project.name());

    if (dst.exists()) {
        print("Removing previous workshop release folder");
        dst.remove_dir_all();
    }

    print("Moving release to " + dst);
    if (!release_folder.move(dst)) {
        fatal("Failed to move " + release_folder + " to " + dst);
    }
} else {
    warn("Cannot prepare workshop release. Folder " + release_folder + " does not exist!");
}
