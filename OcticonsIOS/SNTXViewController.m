//
//  SNTXViewController.m
//  OcticonsIOS
//
//  Created by Jackson Harper on 9/24/13.
//  Copyright (c) 2013 SyntaxTree, Inc. All rights reserved.
//

#import "SNTXViewController.h"
#import "UIImage+Octicons.h"
#import "NSString+Octicons.h"

@interface SNTXViewController () {
	OCTIcon _currentIcon;
}

@end



@implementation SNTXViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
	self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
	if (self) {
		_currentIcon = OCTIconAlert;
	}
	return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

	[self sntx_displayCurrentIcon];
}

- (void)sntx_displayCurrentIcon
{
	NSString *text = [NSString octicon_iconDescriptionForEnum:_currentIcon];
	UIImage *image = [UIImage octicon_imageWithIcon:text
									backgroundColor:[UIColor whiteColor]
										  iconColor:[UIColor darkGrayColor]
										  iconScale:1.0
											andSize:CGSizeMake(150.0F, 150.0F)];

	[[self iconName] setText:text];
	[[self iconButton] setImage:image forState:UIControlStateNormal];
}

- (IBAction)iconButtonTapped:(id)sender
{
	_currentIcon = (_currentIcon + 1) % OCTIconZap;
	[self sntx_displayCurrentIcon];
}
@end
