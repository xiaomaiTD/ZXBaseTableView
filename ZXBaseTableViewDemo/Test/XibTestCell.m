//
//  XibTestCell.m
//  ZXBaseTableViewDemo
//
//  Created by 李兆祥 on 2018/8/20.
//  Copyright © 2018年 李兆祥. All rights reserved.
//

#import "XibTestCell.h"

@implementation XibTestCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}
-(void)setModel:(id)model{
    //通过self.model来获取当前类的model，因为父类的_model无法获取到
    
}
- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
