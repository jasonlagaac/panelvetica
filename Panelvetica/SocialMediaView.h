//
//  SocialMediaView.h
//  StatusPad
//
//  Created by Jason Lagaac on 31/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "FeedView.h"

@interface SocialMediaView : FeedView

-(void)addNewPost:(NSString *)post 
     withUsername:(NSString *)user 
           avatar:(UIImage *)avatar;
@end
