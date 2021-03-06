//
//  NSString+Octicons.h
//  OcticonsIOS
//
//  Created by Jackson Harper on 9/24/13.
//  Copyright (c) 2013 SyntaxTree, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const kOcticonsFamilyName = @"Octicons";

typedef NS_ENUM(NSInteger, OCTIcon) {
	OCTIconAlert,
	OCTIconAlignmentAlign,
	OCTIconAlignmentAlignedTo,
	OCTIconAlignmentUnalign,
	OCTIconArrowDown,
	OCTIconArrowLeft,
	OCTIconArrowRight,
	OCTIconArrowSmallDown,
	OCTIconArrowSmallLeft,
	OCTIconArrowSmallRight,
	OCTIconArrowSmallUp,
	OCTIconArrowUp,
	OCTIconBeer,
	OCTIconBook,
	OCTIconBookmark,
	OCTIconBriefcase,
	OCTIconBroadcast,
	OCTIconBrowser,
	OCTIconBug,
	OCTIconCalendar,
	OCTIconCheck,
	OCTIconChecklist,
	OCTIconChevronDown,
	OCTIconChevronLeft,
	OCTIconChevronRight,
	OCTIconChevronUp,
	OCTIconCircleSlash,
    OCTIconCircuitBoard,
	OCTIconClippy,
	OCTIconClock,
	OCTIconCloudDownload,
	OCTIconCloudUpload,
	OCTIconCode,
	OCTIconColorMode,
	OCTIconComment,
	OCTIconCommentDiscussion,
	OCTIconCreditCard,
    OCTIconDash,
	OCTIconDashboard,
	OCTIconDatabase,
	OCTIconDeviceCamera,
	OCTIconDeviceCameraVideo,
	OCTIconDeviceDesktop,
	OCTIconDeviceMobile,
	OCTIconDiff,
	OCTIconDiffAdded,
	OCTIconDiffIgnored,
	OCTIconDiffModified,
	OCTIconDiffRemoved,
	OCTIconDiffRenamed,
	OCTIconEllipsis,
	OCTIconEye,
	OCTIconFileBinary,
	OCTIconFileCode,
	OCTIconFileDirectory,
	OCTIconFileMedia,
	OCTIconFilePdf,
	OCTIconFileSubmodule,
	OCTIconFileSymlinkDirectory,
	OCTIconFileSymlinkFile,
	OCTIconFileText,
	OCTIconFileZip,
    OCTIconFlame,
    OCTIconFold,
	OCTIconGear,
	OCTIconGift,
	OCTIconGist,
	OCTIconGistSecret,
	OCTIconGitBranch,
	OCTIconGitCommit,
	OCTIconGitCompare,
	OCTIconGitMerge,
	OCTIconGitPullRequest,
	OCTIconGlobe,
	OCTIconGraph,
	OCTIconHeart,
	OCTIconHistory,
	OCTIconHome,
	OCTIconHorizontalRule,
	OCTIconHourglass,
	OCTIconHubot,
	OCTIconInbox,
	OCTIconInfo,
	OCTIconIssueClosed,
	OCTIconIssueOpened,
	OCTIconIssueReopened,
	OCTIconJersey,
	OCTIconJumpDown,
	OCTIconJumpLeft,
	OCTIconJumpRight,
	OCTIconJumpUp,
	OCTIconKey,
	OCTIconKeyboard,
    OCTIconLaw,
	OCTIconLightBulb,
	OCTIconLink,
	OCTIconLinkExternal,
	OCTIconListOrdered,
	OCTIconListUnordered,
	OCTIconLocation,
	OCTIconLock,
	OCTIconLogIn,
	OCTIconLogOut,
	OCTIconLogoGithub,
	OCTIconMail,
	OCTIconMailRead,
	OCTIconMailReply,
	OCTIconMarkGithub,
	OCTIconMarkdown,
	OCTIconMegaphone,
    OCTIconMention,
	OCTIconMicroscope,
	OCTIconMilestone,
	OCTIconMirrorPublic,
    OCTIconMortarBoard,
	OCTIconMoveDown,
	OCTIconMoveLeft,
	OCTIconMoveRight,
	OCTIconMoveUp,
	OCTIconMute,
	OCTIconNoNewline,
	OCTIconOctoface,
	OCTIconOrganization,
    OCTIconPackage,
    OCTIconPaintcan,
	OCTIconPencil,
	OCTIconPerson,
	OCTIconPin,
	OCTIconPlaybackFastForward,
	OCTIconPlaybackPause,
	OCTIconPlaybackPlay,
	OCTIconPlaybackRewind,
	OCTIconPlug,
	OCTIconPlus,
	OCTIconPodium,
	OCTIconPrimitiveDot,
	OCTIconPrimitiveSquare,
	OCTIconPulse,
	OCTIconPuzzle,
	OCTIconQuestion,
	OCTIconQuote,
	OCTIconRadioTower,
	OCTIconRepo,
	OCTIconRepoClone,
	OCTIconRepoForcePush,
	OCTIconRepoForked,
	OCTIconRepoPull,
	OCTIconRepoPush,
	OCTIconRocket,
	OCTIconRss,
	OCTIconRuby,
	OCTIconScreenFull,
	OCTIconScreenNormal,
	OCTIconSearch,
	OCTIconServer,
	OCTIconSettings,
	OCTIconSplit,
	OCTIconSquirrel,
	OCTIconStar,
	OCTIconSteps,
	OCTIconStop,
	OCTIconSync,
	OCTIconTag,
	OCTIconTelescope,
	OCTIconTerminal,
	OCTIconThreeBars,
	OCTIconTools,
	OCTIconTrashcan,
	OCTIconTriangleDown,
	OCTIconTriangleLeft,
	OCTIconTriangleRight,
	OCTIconTriangleUp,
	OCTIconUnfold,
	OCTIconUnmute,
	OCTIconVersions,
	OCTIconX,
	OCTIconZap,
};

@interface NSString (Octicons)

+ (NSString *)octicon_iconStringForEnum:(OCTIcon)value;
+ (NSString *)octicon_iconDescriptionForEnum:(OCTIcon)icon;
+ (OCTIcon)octicon_enumForIconIdentifier:(NSString *)string;
+ (NSString *)octicon_iconStringForIconIdentifier:(NSString*)identifier;

@end
