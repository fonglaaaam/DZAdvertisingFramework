//
//  ViewController.swift
//  Demo
//
//  Created by Chen Andy on 16/2/15.
//  Copyright © 2016年 Chen Andy. All rights reserved.
//

import UIKit
import DZAdvertising

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        let bannerView = DZAdvertising.bannerView("999999/888888", self)
        bannerView.frame = CGRectMake((view.frame.width - 320)/2, view.frame.height - 20 - 50, 320, 50)
        self.view.addSubview(bannerView)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    } 
}

