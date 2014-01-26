//
//  BigLottoTableVC.h
//  ios_iLotto
//
//  Created by Andy on 2014/1/26.
//  Copyright (c) 2014年 Andy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "BigLottoCell.h"

@interface BigLottoTableVC : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *listArr;
        NSMutableArray *list;
}
@property (weak, nonatomic) IBOutlet UILabel *testLabel;

@end
