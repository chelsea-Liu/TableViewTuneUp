//
//  VCTable.h
//
//  Created by Ian Keen on 14/07/2015.
//  Copyright (c) 2015 Mustard. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VCTableModel;

@interface VCTable : UIViewController
-(instancetype)initWithModel:(VCTableModel *)model;
@end