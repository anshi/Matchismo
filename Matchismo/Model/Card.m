//
//  Card.m
//  Matchismo
//
//  Created by An Shi on 14-8-26.
//  Copyright (c) 2014年 AS. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
